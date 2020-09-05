#!/usr/bin/python3
"""Python script that sends a request to a URL and displays X-Request-Id"""

if __name__ == "__main__":
    import requests
    import sys

    req = requests.get(sys.argv[1])
    print(req.headers['x-request-id'])
