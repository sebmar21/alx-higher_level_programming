#!/usr/bin/python3
"""Write a class Rectangle that inherits from BaseG"""

BaseGeometry = __import__("7-base_geometry").BaseGeometry


class Rectangle(BaseGeometry):
    """inherite from BaseGeometry"""

    def __init__(self, width, height):
        self.integer_validator("width", width)
        self.__width = width
        self.integer_validator("height", height)
        self.__height = height
