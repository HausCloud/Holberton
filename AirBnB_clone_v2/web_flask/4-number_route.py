#!/usr/bin/python3
"""Run simple server using Flask"""
from flask import Flask, escape, url_for
app = Flask(__name__)
app.url_map.strict_slashes = False


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


@app.route('/python/', defaults={'text': 'is cool'}, strict_slashes=False)
@app.route('/python/<text>')
def python_something(text):
    """Function that returns HTTP response 'Python <text> or is cool'"""
    return 'Python ' + text.replace('_', ' ')


@app.route('/number/<int:n>', strict_slashes=False)
def number_something(n):
    """Function that returns HTTP response '<number>'"""
    return '{} is a number'.format(n)


if __name__ == "__main__":
    app.run('0.0.0.0', 5000)
