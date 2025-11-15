## 📂 Thiết lập chương trình

### 1️⃣ Cài đặt python và thư viện

Hãy cài đặt python IDLE từ phiên bản 3.8 trở lên.Sau đó cài thư viện python cần thiết bằng cách nhập câu lệnh sau vào Terminal

```bash
pip install ultralytics opencv-python numpy torch torchvision torchaudio
```

### 2️⃣ Tải model YOLO11

Tải xuống file **YOLO11**  (`yolo11l.pt`) từ [link này](https://docs.ultralytics.com/models/yolo11/#performance-metrics),vào trang và kéo xuống dưới cho tới khi gặp được mục  "🔥Performance" sau đó chọn vào mục model YOLO11l để tải file.Cuối cùng,đặt file model YOLO11l vào thư mục dự án



### 3️⃣ Chạy chương trình


```bash
python main.py
```
**Với**
- **Input:** file video bạn muốn đưa vào
- **Output:** Hoàn thành và lưu lại dưới file tên `output_video.mp4`
- **Hình ảnh hóa:** Hiển thị kết quả theo dõi với các hộp giới hạn và số lượng

## 🎯 Thiết lập

- Thay đổi video Input ở dòng `cap = cv2.VideoCapture('./test_2.mp4')`.
- Điều chỉnh `line_y_red = 430` để thay đổi vị trí đường dây đỏ
