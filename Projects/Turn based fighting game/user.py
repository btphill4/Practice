# user holds all class types 
from weapons import *
# class types:
# archer:
"""
HP: 12
Weapons: Bow, Dagger
Range: 15
self.inventory
"""

class user:
    i = 0
    def __init__(self, classType):
        self.name = name
        self.classType = classType
        self.hp = hp
        self.mana = mana
        self.range = range
        self.team = []
        self.inventory = {
            # Health
            "healthLow": 2,
            "healthMed": 1,
            "healthHigh": 0,

            # Mana
            "manaLow": 0,
            "manaMed": 0,
            "manaHigh":0,

            # Others
            "confusion": 1,
            "range" : 1
            }


        if self.classType == "archer":
            self.hp = 10
            self.mana = 0
            self.range = 15
            self.weapons = ["bow, dagger"]


    def pickup(self, item):
        self.inventory.append(item)
        item.owner = self


