#/usr/bin/python3
import unittest
import io
import sys
from models.rectangle import Rectangle
from models.base import Base

class Test_Rectangle(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0

    def test_id_check(self):
        """ test to check if id is set correctly for both None and good value.
        """
        r1 = Rectangle(8, 8)
        self.assertEqual(r1.id, 1)
        r2 = Rectangle(10, 20, 30, 40, 50)
        self.assertEqual(r2.id, 50)

    def test_WTint_check(self):
        """ test that catches TypeError exception from bad input for width. In this case a string.
        """
        with self.assertRaises(TypeError, msg="width must be an integer"):
            Rectangle("string", 1)

    def test_HTint_check(self):
        """ test that catches TypeError exception from bad input for height. In this case a list.
        """
        with self.assertRaises(TypeError, msg="height must be an integer"):
            Rectangle(1, [1, 2, 3])

    def test_WVint_check(self):
        """ test that catches ValueError exception from bad value for width.
        """
        with self.assertRaises(ValueError, msg="width must be > 0"):
            Rectangle(-100, 6)

    def test_HVint_check(self):
        """ test that catches ValueError exception from bad value for height.
        """
        with self.assertRaises(ValueError, msg="height must be > 0"):
            Rectangle(6, -100)

    def test_xTint_check(self):
        """ test that catches TypeError exception from bad input for x.
        """
        with self.assertRaises(TypeError, msg="x must be an integer"):
            Rectangle(1, 1, "string", 1)

    def test_yTint_check(self):
        """ test that catches TypeError exception from bad input for y.
        """
        with self.assertRaises(TypeError, msg="y must be an integer"):
            Rectangle(1, 1, 1, [1, 2, 3])

    def test_xVint_check(self):
        """ test that catches ValueError exception from bad value for x.
        """
        with self.assertRaises(ValueError, msg="x must be >= 0"):
            Rectangle(1, 1, -100, 1)

    def test_yVint_check(self):
        """ test that catches ValueError exception from bad value for y.
        """
        with self.assertRaises(ValueError, msg="y must be >= 0"):
            Rectangle(1, 1, 1, -100)

    def test_fewArgs(self):
        """ test that catches TypeError exception by providing less than required arguments.
        """
        with self.assertRaises(TypeError, msg="__init__() missing 2 required positional arguments: /'width' and 'height/'"):
            Rectangle()

    def test_argOverload(self):
        """ test that catches TypeError exception by inputting excess arguments.
        """
        with self.assertRaises(TypeError, msg="__init__() takes from 3 to 6 positional arguments but 10 were given"):
            Rectangle(1, 1, 1, 1, 1, 1, 1, 1, 1)

    def test_area(self):
        """ test to check if area returns correct value.
        """
        r1 = Rectangle(3, 3)
        x = Rectangle.area(r1)
        self.assertEqual(x, 9)
        r2 = Rectangle(98932, 98233)
        x = Rectangle.area(r2)
        self.assertEqual(x, 9718387156)

    def test_hash_square(self):
        """ test to check if stdout from display method is correct.
        """
        stdout = sys.stdout
        sys.stdout = io.StringIO()
        r1 = Rectangle(3, 3)
        r1.display()
        output = sys.stdout.getvalue()
        sys.stdout = stdout
        self.assertEqual(output, "###\n###\n###\n")

    def test_Rstroverload(self):
        """ test to check if __str__ was overloaded in Rectangle
        """
        r1 = Rectangle(7, 7, 7, 7, 7)
        self.assertEqual(r1.__str__(), "[Rectangle] (7) 7/7 - 7/7")

    def test_update_args(self):
        """ test to check if attributes were set appropriately via update
        method. Only *args is used.
        """
        r1 = Rectangle(7, 7, 7, 7, 7)
        r1.update(5)
        self.assertEqual(r1.__str__(), "[Rectangle] (5) 7/7 - 7/7")
        r1.update(5, 10)
        self.assertEqual(r1.__str__(), "[Rectangle] (5) 7/7 - 10/7")
        r1.update(5, 10, 15)
        self.assertEqual(r1.__str__(), "[Rectangle] (5) 7/7 - 10/15")
        r1.update(5, 10, 15, 20)
        self.assertEqual(r1.__str__(), "[Rectangle] (5) 20/7 - 10/15")
        r1.update(5, 10, 15, 20, 25)
        self.assertEqual(r1.__str__(), "[Rectangle] (5) 20/25 - 10/15")
        r1.update("hi")
        self.assertEqual(r1.__str__(), "[Rectangle] (hi) 20/25 - 10/15")
        r1.update()
        self.assertEqual(r1.__str__(), "[Rectangle] (hi) 20/25 - 10/15")

    def test_update_kwargs(self):
        """ test to check if attributes were set appropriately via update
        method. Both *args and **kwargs is used. Also checks for None and
        bad key.
        """
        r1 = Rectangle(7, 7, 7, 7, 7)
        r1.update(3, 5, 6)
        self.assertEqual(r1.__str__(), "[Rectangle] (3) 7/7 - 5/6")
        r1.update(x=40, width=78, id=99)
        self.assertEqual(r1.__str__(), "[Rectangle] (99) 40/7 - 78/6")
        r1.update(hooplah=29292)
        self.assertEqual(r1.__str__(), "[Rectangle] (99) 40/7 - 78/6")
        r1.update()
        self.assertEqual(r1.__str__(), "[Rectangle] (99) 40/7 - 78/6")
        r1.update("hi")
        self.assertEqual(r1.__str__(), "[Rectangle] (hi) 40/7 - 78/6")
        r1.update(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)
        self.assertEqual(r1.__str__(), "[Rectangle] (1) 1/1 - 1/1")

    def test_JSONdict(self):
        r1 = Rectangle(7, 7, 7, 7)
        self.assertEqual(r1.__str__(), "[Rectangle] (1) 7/7 - 7/7")
        r1_dict = r1.to_dictionary()
        self.assertTrue((r1_dict == {'x': 7, 'y': 7, 'id': 1, 'width': 7,
                                     'height': 7}))
        self.assertTrue((type(r1_dict) is (dict)))

    def test_TOJSONSTRING(self):
        r1 = Rectangle(7, 7, 7, 7)
        dictionary = r1.to_dictionary()
        self.assertTrue((type(dictionary) == (dict)))
        json_dictionary = Base.to_json_string([dictionary])
        self.assertTrue((type(json_dictionary) == (str)))
