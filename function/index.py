import tkinter as tk
import requests

def download_video():
    url = "https://example.com/video.mp4"
    response = requests.get(url)
    open("video.mp4", "wb").write(response.content)

root = tk.Tk()
root.title("YouTube Video Downloader")

label = tk.Label(root, text="Enter the video URL:")
label.pack()

entry = tk.Entry(root)
entry.pack()

button = tk.Button(root, text="Download", command=download_video)
button.pack()

root.mainloop()
