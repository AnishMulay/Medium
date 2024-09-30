FROM python:3.9-slim

WORKDIR /app

COPY ../app /app

RUN pip install --no-cache-dir Flask gunicorn

CMD ["gunicorn", "--bind", "0.0.0.0:8000", "app:app", "--workers", "3"]