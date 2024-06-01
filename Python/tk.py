import tkinter as tk



class Calculator():

    

    def flash(self):
        self.display.configure(text=self.displayed)
    
    def clear(self):
        self.displayed=""
        self.flash()
    def evaluate(self,):

        try:
            self.displayed=str(eval(str(self.displayed)))
            self.flash()
        except:
            SyntaxError
            self.displayed="FUCK YOU NIGGA"
            self.flash()
            
    def givebutton(self,position,text):
        def foo():
            
            self.displayed=self.displayed+str(text)
            self.flash()
        return tk.Button(position,text=text,command=foo)

        
    def __init__(self,root) -> None:
        
        self.displayed=""
##################Display##

        self.top_frame= tk.Frame(root,bg="BLUE")
        self.top_frame.pack(side=tk.TOP,fill=tk.X)

        self.display= tk.Label(self.top_frame,text=self.displayed,bg="black",fg="white",font=("courier",20))
        self.display.pack(side=tk.LEFT,fill=tk.BOTH)


###################NUMPAD####

        numpad = tk.Frame(root)
        numpad.pack(side=tk.LEFT,expand=tk.TRUE,anchor="center")


        for a in range(10):
            if not a%3:
                row=tk.Frame(numpad)
                row.pack(side=tk.TOP)

            if a==9:
                button= self.givebutton(row,".")
                button.pack(side=tk.LEFT,padx=5,pady=5,ipadx=20)

            button= self.givebutton(row,a)
            button.pack(side=tk.LEFT,padx=5,pady=5,ipadx=20)
        
        button= self.givebutton(row,"C")
        button.pack(side=tk.LEFT,padx=5,pady=5,ipadx=20)
        button.configure(command=self.clear)

##################ARTHPAD#####

        arthpad = tk.Frame(root)
        arthpad.pack(side=tk.LEFT,expand=tk.TRUE)

        for a in "+-*=":
            button=self.givebutton(arthpad,a)
            button.pack(side=tk.TOP,padx=5,pady=5,ipadx=20)
        
        button.configure(command=self.evaluate)



















###########################################################
root = tk.Tk()

root.geometry("450x300")

root.minsize(450,300)
root.maxsize(650,400)


Calculator(root)


root.mainloop()