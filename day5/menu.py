def get_menu():
    menu = {
        1 : insertrecord,
        2 : deleteRecord,
        3 : updateRecord,
        4 : searchReacord,
        5 : listallRecord

    }
    return menu

def star_app():
    choice = 0
    while true:
        print('1:Create 2:Delete 3:update 4:Search 5:listall 6:Exit')
        menu = get_menu()
        menu.get(choice)()
        choice = input ('Do you wush to continue? type 1 for yes , anything for no')
        if choice is not '1':
            break
