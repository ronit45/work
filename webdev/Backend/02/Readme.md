# 📹 Video Platform – User Backend Service

A modular backend for a YouTube-like video platform built using Node.js, Express, MongoDB, and Cloudinary. This service handles user authentication, profile management, and media uploads.

## 🔧 Tech Stack

- **Backend:** Node.js, Express.js
- **Database:** MongoDB
- **Authentication:** JWT (Access + Refresh Tokens), bcrypt
- **File Uploads:** Multer, Cloudinary
- **Others:** Secure Cookies, Role-Based Access Control

## 🔗 GitHub Repository

[Click to View Repository](https://github.com/ronit45/work/tree/main/webdev/Backend/02)

## ✨ Features

- ✅ **User Authentication & Authorization**  
  Modular login, registration, logout flow using JWT and refresh tokens with cookie-based session handling.

- 🔐 **Role-Protected Routes**  
  Built using Express middleware (`verifyJWT`, `verifyRoles`) to enforce access control based on user roles.

- ☁️ **File Uploads with Multer & Cloudinary**  
  Supports avatar and cover image upload. Files are stored securely and scalably on Cloudinary.

- 🧑‍💼 **Profile Management**  
  Authenticated users can update profile details and change passwords securely with `bcrypt` hashing.

- 📊 **MongoDB Aggregation Pipelines**  
  Custom logic for channel stats, subscription counts, and user watch history using advanced aggregation.

## 📂 Folder Structure

```bash
📦backend
 ┣ 📂controllers
 ┣ 📂middleware
 ┣ 📂models
 ┣ 📂routes
 ┣ 📂utils
 ┣ 📜server.js
 ┗ 📜.env.example

