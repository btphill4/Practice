# Holds weapon types 
from user import *

# sword
# https://gamedev.stackexchange.com/questions/50870/how-to-structure-code-for-many-unique-weapons-spells-powers

# weapons = ['two-handed-sword', 'bow', 'crossbow', 'wand', 'staff', 'dagger']
WEAPONS = {
    'bow' : {
                'name' : 'Common Bow',
                'damage' : 4,
                'range' : 15
            },
    'dagger' : {
                'name' : 'Common Dgger',
                'damage' : 2,
                'range' : 3
    }
    
}

class Weapon:
    # set equipped status to false init
    equipped = False

    # set type of actions for weapon
    actionsDict = {
        "on_hit": "on_hit_actions",
        "on_turn" : "on_turn_actions" 
    }

    def __init__(self, template):
        self.__dict__.update(WEAPONS[template])

    # toggles if user has weapon equipped
    def toggle_equipped(self):
        # if equipped set to false
        if self.equipped == True:
            self.equipped = False
            # action = self.on_unequip
        else:
            self.equipped = True
            # action = self.on_equipped

    #

# weapon:
#     two_handed_sword = 'two-handed-sword'
#     bow = 'bow'
#     crossbow = 'crossbow'
#     wand = 'wand'
#     staff = 'staff'
#     dagger = 'dagger'
