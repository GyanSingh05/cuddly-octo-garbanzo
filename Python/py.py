import tkinter as tk


class calculator():

    def syntax_is_fine(self):
        return True

    def evaluate(self):
        if not self.syntax_is_fine():
            return
        
        s1=""
        op=''
        s2=""
        working_on_one= False
        first_done=True
        for a in self.displayed :
            if a in "+-*" and working_on_one:
                working_on_one=False
                op=a
            if first_done:
                working_on_one=True
                first_done=False
                
            if working_on_one:
                s1+=a
                
            if not working_on_one and a not in"+-*":
                s2+=a
        
        s1=float(s1)
        s2=float(s2)
        

        if op=="+":
            self.displayed=str(s1+s2)

        elif op=="-":
            self.displayed=str(s1-s2)

        elif op=="*":
            self.displayed=str(s1*s2)
        
        self.flash()


            


    def clear(self):
        self.displayed=""
        self.flash()

    def flash(self):
        self.entry.config(text=self.displayed)

        
    def make_button(self,letter,frame):
        def foo():
            self.displayed=self.displayed+str(letter)
            self.flash()
        button = tk.Button(frame,text=letter,command=foo)
        return button
    def __init__(self,root):
        self.displayed=""
        mainframe = tk.Frame(root)
        mainframe.pack(side=tk.TOP,expand=tk.TRUE,fill=tk.BOTH)

        ########################################
        display = tk.Frame(mainframe)
        display.pack(side=tk.TOP, fill=tk.X)

        self.entry = tk.Label(display,bg="blue",font=("courier","20"))
        self.entry.pack(side=tk.TOP,expand=tk.TRUE, fill=tk.X)

        ########################################
        numpad = tk.Frame(mainframe)
        numpad.pack(side=tk.LEFT,expand=tk.TRUE,)


        for a in range(10):
            
            if not a%3:
                lisst = tk.Frame(numpad)
                lisst.pack(side=tk.TOP,expand=tk.TRUE)
            if a==9:
                button=self.make_button(".",lisst)
                button.pack(side=tk.LEFT,expand=tk.TRUE, padx=10,pady=10, ipadx=20)
            button=self.make_button(a,lisst)
            button.pack(side=tk.LEFT,expand=tk.TRUE, padx=10,pady=10, ipadx=20)
        button=self.make_button("C",lisst)
        button.config(command=self.clear)

        button.pack(side=tk.LEFT,expand=tk.TRUE, padx=10,pady=10, ipadx=20)
        ########################################

        arthpad = tk.Frame(mainframe)
        arthpad.pack(side=tk.LEFT, expand=tk.TRUE)

       
        arths='+-*='

        for a in arths:
            button=self.make_button(a,arthpad)
            button.pack(side=tk.TOP,expand=tk.TRUE, padx=10,pady=10, ipadx=20)
    
        button.config(command=self.evaluate)

        

root=tk.Tk()

root.geometry("450x300")

calc= calculator(root)





root.mainloop()