#include <Python.h>

static PyObject* add(PyObject* self, PyObject* args) {
    double a, b;

    if (!PyArg_ParseTuple(args, "dd", &a, &b)) {
        return NULL;
    }

    return Py_BuildValue("d", a + b);
}

static PyMethodDef CalculatorMethods[] = {
    {"add", add, METH_VARARGS, "Suma de dos numeros"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mycalculatormodule = {
    PyModuleDef_HEAD_INIT,
    "my_calculator_cpp",
    NULL,
    -1,
    CalculatorMethods
};

PyMODINIT_FUNC PyInit_my_calculator_cpp(void) {
    return PyModule_Create(&mycalculatormodule);
};
