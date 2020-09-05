#/usr/bin/python3
import unittest
from models.rectangle import Rectangle
from models.base import Base
from models.square import Square

class Test_Square(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0

    def test_super_check(self):
        """ test to check if super() inherited __init__ from Rectangle
        correctly
        """
        s1 = Square(50, 50, 50, "ID is me")
        self.assertEqual(s1.size, 50)
        self.assertEqual(s1.x, 50)
        self.assertEqual(s1.y, 50)
        self.assertEqual(s1.id, "ID is me")

    def test_Sstroverload(self):
        """ test to check if __str__ overload works for square"""
        s1 = Square(24, 24, 24, 24)
        self.assertEqual(s1.__str__(), "[Square] (24) 24/24 - 24")
        s1 = Square(25, 25, 25, [24, 25])
        self.assertEqual(s1.__str__(), "[Square] ([24, 25]) 25/25 - 25")

    def test_fewArgs(self):
        """ test that catches TypeError exception by providing less than required arguments.
        """
        with self.assertRaises(TypeError, msg="__init__() missing 1 required positional argument: \'size\'"):
            Square()

    def test_argOverload(self):
        """ test that catches TypeError exception by inputting excess arguments.
        """
        with self.assertRaises(TypeError, msg="__init__() takes from 2 to 5 positional arguments but 8 were given"):
            Square(1, 1, 1, 1, 1, 1, 1)

    def test_neg_ints(self):
        """ test to check if ValueError exceptions were raised when inputting
        negative integers"""
        with self.assertRaises(ValueError, msg="width must be > 0"):
            Square(-1)
        with self.assertRaises(ValueError, msg="x must be >= 0"):
            Square(1, -1)
        with self.assertRaises(ValueError, msg="y must be >= 0"):
            Square(1, 1, -1)
        s1 = Square(1, 1, 1, -1)
        self.assertEqual(s1.id, -1)

    def test_not_int(self):
        with self.assertRaises(TypeError, msg="width must be an integer"):
            Square("shamalamadingdong")
        with self.assertRaises(TypeError, msg="x must be an integer"):
            Square(1, "shamalamadingdong")
        with self.assertRaises(TypeError, msg="y must be an integer"):
            Square(1, 1, "shamalamadingdong")


    def test_update_args(self):
        """ test to check if attributes were set appropriately via update
        method. Only *args is used.
        """
        s1 = Square(7, 7, 7, 7)
        self.assertEqual(s1.__str__(), "[Square] (7) 7/7 - 7")
        s1.update(1)
        self.assertEqual(s1.__str__(), "[Square] (1) 7/7 - 7")
        s1.update(1, 2)
        self.assertEqual(s1.__str__(), "[Square] (1) 7/7 - 2")
        s1.update(1, 2, 3)
        self.assertEqual(s1.__str__(), "[Square] (1) 3/7 - 2")
        s1.update(1, 2, 3, 4)
        self.assertEqual(s1.__str__(), "[Square] (1) 3/4 - 2")
        s1.update()
        self.assertEqual(s1.__str__(), "[Square] (1) 3/4 - 2")
        s1.update(1, 1, 1, 1, 1, 1, 1, 1, 1, 1)
        self.assertEqual(s1.__str__(), "[Square] (1) 1/1 - 1")

    def test_update_kwargs(self):
        s1 = Square(7, 7, 7, 7)
        s1.update(1010, 2020, 3030, 4040)
        self.assertEqual(s1.__str__(), "[Square] (1010) 3030/4040 - 2020")
        s1.update(y=4, x=4, id=4)
        self.assertEqual(s1.__str__(), "[Square] (4) 4/4 - 2020")
        s1.update(hooplah=394399393939)
        self.assertEqual(s1.__str__(), "[Square] (4) 4/4 - 2020")
        s1.update()
        self.assertEqual(s1.__str__(), "[Square] (4) 4/4 - 2020")
        s1.update("hi")
        self.assertEqual(s1.__str__(), "[Square] (hi) 4/4 - 2020")
        s1.update(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)
        self.assertEqual(s1.__str__(), "[Square] (1) 1/1 - 1")

    def test_JSONdict(self):
        s1 = Square(7, 7, 7, 7)
        self.assertEqual(s1.__str__(), "[Square] (7) 7/7 - 7")
        s1_dict = s1.to_dictionary()
        self.assertTrue((s1_dict == {'x': 7, 'y': 7, 'id': 7, 'size': 7}))
        self.assertTrue((type(s1_dict) is (dict)))
