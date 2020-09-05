#!/usr/bin/python3
#!/usr/bin/python3
class Student:
    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        if attrs is None:
            return self.__dict__
        if type(attrs) is (list):
            for strings in attrs:
                if type(strings) is not (str):
                    return self.__dict__
        else:
            return self.__dict__
        new_dict = {}
        for k, v in self.__dict__.items():
            if k in attrs:
                new_dict.update({k:v})
        return new_dict

    def reload_from_json(self, json):
        print(json)
