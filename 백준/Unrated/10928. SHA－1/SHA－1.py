import hashlib

string = input()
encoded_string = string.encode()
hexdigest = hashlib.sha1(encoded_string).hexdigest()
print(hexdigest)