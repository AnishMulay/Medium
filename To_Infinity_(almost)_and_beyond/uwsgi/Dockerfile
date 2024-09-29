FROM python:3.9-slim

# Set the working directory
WORKDIR /app

# Install build tools required to compile uWSGI
RUN apt-get update && apt-get install -y \
    gcc \
    build-essential \
    libpcre3-dev \
    && rm -rf /var/lib/apt/lists/*

# Copy the application files into the container
COPY ../app /app

# Install required Python packages
RUN pip install --no-cache-dir Flask uWSGI

# Expose the port the app runs on
EXPOSE 8000

# Define the command to run the application
CMD ["uwsgi", "--http", "0.0.0.0:8000", "--wsgi-file", "app.py", "--callable", "app", "--processes", "4", "--threads", "2"]