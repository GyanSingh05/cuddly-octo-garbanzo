import tkinter as tk
class Calc():
    def __init__(self,root):
        self.displayed=""
        root.geometry("500x350")
        #display FRame
        frame1=tk.Frame(root,bg="lightblue")
        frame1.pack(side=tk.TOP,fill=tk.X)

        self.display_label=tk.Label(frame1,text="DEFAULT",font=("courier","20")) 
        self.display_label.pack(side=tk.RIGHT)
        #number pad
        frame2= tk.Frame(root,bg="WHITE")
        frame2.pack(side=tk.LEFT,expand=tk.TRUE)
        
        for a in range(10):
            if not a%3:
                row1frame= tk.Frame(frame2, bg= "lightblue")
                row1frame.pack(side=tk.TOP, expand=tk.TRUE, fill=tk.BOTH)
            
            if a==9:
                button=self.givebutton(row1frame,".")
                button.pack(side=tk.LEFT)


            
            button= self.givebutton(row1frame,str(a))
            button.pack(side=tk.LEFT,pady=5,padx=2)
        
        button= self.givebutton(row1frame,"C")
        button.pack(side=tk.LEFT)

        button.config(command=self.clear)

    

        row1frame.pack()
 

        #arithmetic pad
        frame3 = tk.Frame(root,bg="GREY")
        frame3.pack(side=tk.LEFT,expand=tk.TRUE)

        arithmetic="+-*="
        for sym in arithmetic:
            button=self.givebutton(frame3,sym)
            button.pack(side=tk.TOP,pady=5)
        button.config(command= self.bar)

    def bar(self):
        self.displayed= str(eval(self.displayed))
        self.flash()
    
    def clear(self):
        self.displayed=""
        self.flash()

    def givebutton(self,frame,sym):
        def foo():
            self.displayed+=sym
            self.flash()
        return tk.Button(frame,text=sym,width=8,command=foo)
    
    def flash(self):
        self.display_label.config(text=self.displayed)

root = tk.Tk()
root.geometry("450x300")
calculator=Calc(root)
root.mainloop()