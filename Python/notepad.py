import tkinter as tk


root = tk.Tk()

root.geometry("900x650")
root.title("Notepad - G+")



mainframe= tk.Frame(root)
mainframe.pack(side=tk.TOP, expand=tk.TRUE, fill=tk.BOTH)



text=tk.Text(mainframe,font=("courier",20))
text.pack(side=tk.LEFT,anchor=tk.NW, expand=tk.TRUE,fill=tk.BOTH)


















root.mainloop()