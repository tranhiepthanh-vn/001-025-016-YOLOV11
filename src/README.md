Tiến độ:
nội dung chương 3,4,5 đang sửa lại

## 📂 Thiết lập chương trình

### 1️⃣ Cài đặt python và thư viện

Hãy cài đặt python IDLE từ phiên bản 3.8 trở lên.Sau đó cài thư viện python cần thiết bằng cách nhập câu lệnh sau vào Terminal

```bash
pip install ultralytics opencv-python numpy torch torchvision torchaudio
```

### 2️⃣ Tải model YOLO11

Tải xuống file **custom_YOLO11**  (`custom_yolo`) từ [link này](https://drive.google.com/drive/folders/1chvausLrXTiJF6I0vgMg24F9iq1hbOA8).Cuối cùng,đặt file model YOLO11l vào thư mục dự án



### 3️⃣ Chạy chương trình


```bash
python main.py
```
**Với**
- **Input:** file video bạn muốn đưa vào
- **Output:** Hoàn thành và lưu lại dưới file tên `output_video.mp4`

## 🎯 Thiết lập

- Thay đổi video Input ở dòng `cap = cv2.VideoCapture('./test_2.mp4')`.
