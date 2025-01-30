import random
import tkinter as tk

def cara_ou_coroa():
        x = random.randint(1,2)
        if x == 1:
            x = "Cara"
        else:
            x = "Coroa"

        label_x.config(text=x)

janela = tk.Tk()
janela.title("Cara ou Coroa?")
janela.geometry("360x180")

label = tk.Label(janela, text = "Cara ou coroa?", font = ("Arial", 14))
label.pack(pady= 10)


botao = tk.Button(janela, text= "APERTE",font = ("Arial", 12) , command= cara_ou_coroa)
botao.pack(pady=10)


label_x = tk.Label(janela, text="", font = ("Arial", 16, "bold"))
label_x.pack(pady=10)

janela.mainloop()