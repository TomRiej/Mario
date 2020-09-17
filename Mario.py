# Tom Rietjens
# Mario C and python Challege

BLOCK = "#"
height = -1 # python doesnt have do until/while loops: -1 makes while loop run at least once
while height not in range(1,24):
    try:
        height = int(input("Height: "))
    except:
        pass

spaces = height-1
blocks = 2
for i in range(height):
    print(" "*spaces + BLOCK*blocks)
    spaces -= 1
    blocks += 1


#     ##
#    ###
#   ####
#  #####
# ######
