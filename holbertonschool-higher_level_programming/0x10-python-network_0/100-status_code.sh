#!/bin/bash
# Display only status code
curl -sI -w '%{http_code}' "$1" -o /dev/null
