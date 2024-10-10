from setuptools import setup, Extension

module = Extension("my_calculator_cpp", sources=["calculator/calculator.cpp"])

setup(
    name="calculator",
    version="1.0.0",
    ext_modules=[module],
    packages=["calculator"]
)