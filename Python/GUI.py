import tkinter as tk
window = tk.Tk()
window.geometry("600x400")

mainframe= tk.Frame(
    window,
    
)
mainframe.pack(side=tk.TOP,
               expand=tk.TRUE
)

row1 = tk.Frame(
    mainframe,
    bg="black"
    

,padx=10
)
row1.pack(
    side=tk.TOP,
    
)


num1= tk.Label(
    row1,
    text="1",
    font=("courier","40"),
    bg="orange"
    
,padx=10
)
num1.pack(
    side=tk.LEFT,
  
     
      
)
num2= tk.Label(
    row1,
    text="2",
    font=("courier","40"),
    bg="white"

,padx=10
)
num2.pack(
    side=tk.LEFT,
   
     
      
)

num3= tk.Label(
    row1,
    text="3",
    font=("courier","40"),
    bg="green"

,padx=10
)
num3.pack(
    side=tk.LEFT,
   
     
      
)


#############################

row2 = tk.Frame(
    mainframe,
    bg="WHITE"
    


,padx=10
)
row2.pack(
    side=tk.TOP
    ,
    
)


num4= tk.Label(
    row2,
    text="4",
    font=("courier","40"),
    bg="orange"
)
num4.pack(
    side=tk.LEFT,
  
     
      
)
num5= tk.Label(
    row2,
    text="5",
    font=("courier","40"),
    bg="white"

)
num5.pack(
    side=tk.LEFT,
   
     
      
)

num6= tk.Label(
    row2,
    text="6",
    font=("courier","40"),
    bg="green"

)
num6.pack(
    side=tk.LEFT,
   
     
      
)


###################################################
row3 = tk.Frame(
    mainframe,
    bg="GREEN"
    

,padx=10
)
row3.pack(
    side=tk.TOP
    ,
    
)


num7= tk.Label(
    row3,
    text="7",
    font=("courier","40"),
    bg="orange"
)
num7.pack(
    side=tk.LEFT,
  
     
      
)
num8= tk.Label(
    row3,
    text="8",
    font=("courier","40"),
    bg="white"

)
num8.pack(
    side=tk.LEFT,
   
     
      
)

num9= tk.Label(
    row3,
    text="9",
    font=("courier","40"),
    bg="green"

)
num9.pack(
    side=tk.LEFT,
   
     
      
)

###################################################
row4 = tk.Frame(
    mainframe,
    bg="Black"
    

,padx=10
)
row4.pack(
    side=tk.TOP
    ,
    
)

num0= tk.Label(
    row4,
    text="0",
    font=("courier","40"),
    bg="orange"
)
num0.pack(
    side=tk.LEFT,
  
     
      
)


window.mainloop()