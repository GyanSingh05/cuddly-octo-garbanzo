# DO NOT modify or add any import statements
from a2_support import *
import tkinter as tk
from tkinter import messagebox, filedialog
from typing import Optional, Callable

# Name:
# Student Number: 
# ----------------

# Write your classes and functions here

def main() -> None:
    """The main function"""
    pass

if __name__ == "__main__":
    main()
class Tile():
    block_var = False
    Tile_name = "Tile"
    class_name = "Tile()"
    class_var = "T"

    def __repr__(self):
        return self.class_name

    def __str__(self):
        return self.class_var

    def get_tile_name(self):
        return self.Tile_name

    def is_blocking(self):
        return self.block_var


class Ground(Tile):
    class_var = " "
    class_name = "Ground()"
    Tile_name = "Ground"


class Mountain(Tile):
    block_var = True
    class_var = "M"
    class_name = "Mountain()"
    Tile_name = "Mountain"


class Building(Tile):
    health = 0
    standing = True

    def __init__(self, initial_health):
        self.health = initial_health
        if self.health > 9:
            self.health = 9

    def __str__(self):
        return f"{self.health}"

    def __repr__(self):
        return f"Building({self.health})"

    def is_destroyed(self):
        return not self.standing

    def damage(self, damage):
        self.health = self.health - damage
        if self.health <= 0:
            self.health = 0
            self.standing = False
            self.block_var = False
        if self.health > 9:
            self.health = 9

    block_var = True
    class_name = "Building()"
    Tile_name = "Building"


class Board():
  
    def __init__(self, board):
        self.board = board

    def __repr__(self):
        return f'{self.board}'


tiles = [['abc', 'def'], ['ghi', 'jkl']]
board = Board(tiles)
print(type(board))
