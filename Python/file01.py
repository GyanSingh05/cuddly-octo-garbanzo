with open("output.txt","a") as file:
    
    file.write("\nthe next line")
    file.writelines(["\nfirst line", "\nsecond line"," \nthird line"])