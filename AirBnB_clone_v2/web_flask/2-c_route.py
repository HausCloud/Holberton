#!/usr/bin/python3
"""Run simple server using Flask"""
from flask import Flask
app = Flask(__name__)


@app.route('/', strict_slashes=False)
def Hello_HBNB():
    """Function that returns HTTP response 'Hello HBNB'"""
    return 'Hello HBNB!'


@app.route('/hbnb', strict_slashes=False)
def HBNB():
    """Function that returns HTTP response 'HBNB'"""
    return 'HBNB'


@app.route('/c/<text>', strict_slashes=False)
def c_something(text):
    """Function that returns HTTP response 'C <text>'"""
    return 'C ' + text.replace('_', ' ')

if __name__ == "__main__":
    app.run('0.0.0.0', 5000)
