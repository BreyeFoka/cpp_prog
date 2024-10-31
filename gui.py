import tkinter as tk
from tkinter import StringVar, ttk

# Define Morse Code mappings
morse_code_dict = {
    'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.',
    'G': '--.', 'H': '....', 'I': '..', 'J': '.---', 'K': '-.-', 'L': '.-..',
    'M': '--', 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R': '.-.',
    'S': '...', 'T': '-', 'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-',
    'Y': '-.--', 'Z': '--..', '1': '.----', '2': '..---', '3': '...--',
    '4': '....-', '5': '.....', '6': '-....', '7': '--...', '8': '---..',
    '9': '----.', '0': '-----', ' ': '/'
}
# Reverse dictionary for Morse to English translation
english_code_dict = {v: k for k, v in morse_code_dict.items()}

# Function to translate text based on selected mode
def translate_text():
    input_text = input_entry.get().strip().upper()
    mode = translation_mode.get()
    
    if mode == "English to Morse":
        translated = ' '.join(morse_code_dict.get(char, '') for char in input_text)
    else:
        translated = ''.join(english_code_dict.get(char, '') for char in input_text.split())
    
    output_entry.delete(0, tk.END)
    output_entry.insert(tk.END, translated)

# Set up the GUI
root = tk.Tk()
root.title("Morse Code Translator")

# Input text
input_label = ttk.Label(root, text="Enter text:")
input_label.pack()
input_entry = ttk.Entry(root, width=50)
input_entry.pack()

# Translation mode
translation_mode = StringVar(value="English to Morse")
radio_english_to_morse = ttk.Radiobutton(root, text="English to Morse", variable=translation_mode, value="English to Morse")
radio_morse_to_english = ttk.Radiobutton(root, text="Morse to English", variable=translation_mode, value="Morse to English")
radio_english_to_morse.pack()
radio_morse_to_english.pack()

# Translate button
translate_button = ttk.Button(root, text="Translate", command=translate_text)
translate_button.pack()

# Output text
output_label = ttk.Label(root, text="Translated text:")
output_label.pack()
output_entry = ttk.Entry(root, width=50)
output_entry.pack()

root.mainloop()
