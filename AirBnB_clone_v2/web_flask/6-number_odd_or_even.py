#!/usr/bin/python3
"""Run simple server using Flask"""
from flask import Flask, render_template
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


@app.route('/python/', defaults={'text': 'is cool'}, strict_slashes=False)
@app.route('/python/<text>')
def python_something(text):
    """Function that returns HTTP response 'Python <text> or is cool'"""
    return 'Python ' + text.replace('_', ' ')


@app.route('/number/<int:n>', strict_slashes=False)
def number_something(n):
    """Function that returns HTTP response '<number>'"""
    return '{} is a number'.format(n)


@app.route('/number_template/<int:n>', strict_slashes=False)
def num_temp(n):
    """Function that returns HTTP response HTML page"""
    return render_template('5-number.html', num=n)


@app.route('/number_odd_or_even/<int:n>', strict_slashes=False)
def num_odd_even(n):
    """Function that returns HTTP response HTML page"""
    return render_template('6-number_odd_or_even.html', num=n, evenodd=n)

if __name__ == "__main__":
    app.run('0.0.0.0', 5000)
