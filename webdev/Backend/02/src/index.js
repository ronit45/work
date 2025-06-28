import dotenv from "dotenv";
dotenv.config();

import express from "express"; 
import {app} from "./app.js"
import connectDB from "./db/index.js";

// Load env variables from ./env


(async () => {
    try {
        // Connect to DB
        await connectDB()

        // Handle express errors
        app.on("error", (error) => {
            console.error("Express App Error:", error);
            throw error;
        });

        // Start server
        app.listen(process.env.PORT || 8000, () => {
            console.log(`✅ Server running on http://localhost:${process.env.PORT}`);
        });
    } catch (error) {
        console.error("❌ Server failed to start:", error.message);
        process.exit(1);
    }
})();
