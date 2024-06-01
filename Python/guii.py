import tkinter as tk

def foo():
    
    global frame

    if frame["bg"]== "yellow":
        frame.config(bg="purple")
    else:
         frame.config(bg="yellow")




root = tk.Tk(
    
)

root.geometry("659x450")

frame= tk.Frame(root,
                bg="yellow"
      )

frame.pack(
    side=tk.TOP,
    expand=tk.TRUE,
    fill=tk.BOTH
)
button= tk.Button(
    frame,
    text=" COLOR TOGGLE",
    bg="lightgreen",
    command=foo
)
button.pack(
    side=tk.TOP,
    expand=tk.TRUE
)







root.mainloop()