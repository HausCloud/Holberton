#!/usr/bin/python3
"""Python script that sends a POST request to the passed URL"""

if __name__ == "__main__":
    import requests
    import sys

    url = sys.argv[1]
    email = sys.argv[2]

    req = requests.post(url, data={'email': email})
    print(req._content.decode())
