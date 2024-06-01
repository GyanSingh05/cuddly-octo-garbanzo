import tkinter as tk


def onbuttonclick(entry):
    def name():
        print(f"{entry.get()}")
    return name
root = tk.Tk()
root.geometry("200x200")

entry = tk.Entry(
    root,
    text="What is your name?"
)
entry.pack(
    side= tk.LEFT,
    expand=tk.TRUE
)

button=tk.Button(
    root,
    text="wanna know your name?",
    command=onbuttonclick(entry)
)
button.pack(
    side=tk.LEFT,
    expand=tk.TRUE
)









root.mainloop()