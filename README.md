# Unreal Dialogue System - Project Template

Welcome to the **Unreal Dialogue System**
 project template! This template provides everything you need to get
started with creating immersive, cinematic dialogues and branching
narratives in your Unreal Engine projects. Whether you're building an
RPG, visual novel, or adventure game, this system will help you craft
dynamic, choice-driven conversations with ease.

---

## Table of Contents

1. [Features]()
2. [Installation]()
3. [Getting Started]()
4. [Creating Dialogues]()
5. [Dynamic Camera Setup]()
6. [Player Choices and Branching]()
7. [Customizing the UI]()
8. [Troubleshooting]()
9. [Support and Community]()

---

## Features

* **Cinematic Dialogue System:** Create immersive conversations with dynamic camera angles, animations, and transitions.
* **Visual Dialogue Editor:** Design branching dialogue trees with an intuitive node-based interface.
* **Dynamic Camera Control:** Switch between camera angles to emphasize key moments.
* **Player Choices:** Implement meaningful choices that impact the story and game world.
* **Customizable UI:** Fully adaptable dialogue UI to match your game’s style.
* **Audio Integration:** Sync voice lines, sound effects, and subtitles.
* **Localization Support:** Built-in support for multiple languages.
* **Multiplayer Ready:** Supports unique dialogue interactions for each player.

---

## Installation

1. Download the **Unreal Dialogue System** plugin from the Unreal Marketplace.
2. Open your Unreal Engine project (or create a new one).
3. Navigate to `Edit > Plugins` and enable the **Unreal Dialogue System** plugin.
4. Restart the editor if prompted.
5. The plugin is now ready to use! You can find example assets and blueprints in the `Content/LoveStoryContent` folder.

---

## Getting Started

1. Open the `LoveStoryContent` folder in the Content Browser.
2. Use Datatable to create and edit dialogue trees.

---

## Creating Dialogues

1. **Create a Dialogue Asset:** Right-click in the Content Browser and select `LoveStoryContent > Data`.
2. **Open the Dialogue Editor:** Double-click the new dialogue asset to open the editor.
3. **Add New line:** Right-click in the editor to add dialogue lines and choices choices.
4. **Test Your Dialogue:** Use the `Preview` button in the editor to test your dialogue in real-time.

---

## Dynamic Camera Setup

1. Add a `BP_DialogueScene` to your scene and position it for your dialogue.
2. Update CameraPlayerLocationComponent and OtherLocationComponent as your desired

---

## Player Choices and Branching

1. In the Datatable there is a `Dialogue Choice ID` for the choice logic with checking Has Choices and adding Choices
2. Setup the choice logic to different dialogue paths.

---

## Customizing the UI

1. Open the `DialogueUI` widget blueprint in the `Content/LoveStoryContent`/UI folder.
2. Modify the layout, fonts, and colors to match your game’s style.
3. Save and preview your changes in the Dialogue Editor.

---

## Troubleshooting

* **Dialogue not playing:** Ensure the `DialogueManager` is in your scene and the dialogue asset is assigned.
* **UI not appearing:** Check that the `DialogueUI` widget is correctly set up and added to the viewport.
* **Camera issues:** Verify that the camera actors are properly assigned in the Dialogue Editor.

---

## Support and Community

* **Contact Us:** For direct support, email us at contact.s4r14k@gmail.com


Thank you for using the  **Unreal Dialogue System** ! We can’t wait to see the stories you create. Happy developing!
