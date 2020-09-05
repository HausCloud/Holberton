#!/usr/bin/python3
"""Fetch from URL using requests package"""

if __name__ == "__main__":
    import requests

    req = requests.get('https://intranet.hbtn.io/status')
    print("Body response:\n\t- type: {}\n\t- content: {}".format
          (type(req.text), req.text))
