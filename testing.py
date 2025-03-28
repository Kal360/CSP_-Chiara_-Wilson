flavor= input("What kind of cake would you like to make?\n (1 a vanilla cake\n (2 a Chocolate cake\n (3 A strawberry cake\n")
if flavor != "1" and flavor != "2" and flavor != "3":
    print("We don't have the ingredients to make that type of cake.\n")
elif flavor == 1:
    cakeFlavor=1
elif flavor == 2:
    cakeFlavor = 2
else: 
    cakeFlavor=3
    
    frosttype= input(" What type of frosting do you want on your cake?\n (1 A buttercream frosting \n (2 A cream cheese frosting\n (3 A swiss meringue frosting\n")

if frosttype != "1" and frosttype != "2" and frosttype != "3":
    print(" We don't have this type of frosting in stock.\n")
elif frosttype== 1:
    frosting=1
elif frosttype==2:
    frosting=2
else:
    frosting = 3
