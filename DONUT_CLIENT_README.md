# Donut Client: Horion-based starter patch

This is a SOURCE CODE starter derived from the user-provided Horion archive.

Changes:
- Default ClickGUI keybind changed from Insert to Right Shift (`VK_RSHIFT`).
- ClickGUI dark surfaces tinted amethyst purple.

This does **not** provide an automatic startup splash or a Bedrock 26.50-compatible DLL. The original Horion hooks and game SDK must be updated and validated for that version. No compile or injection test has been performed.

For an automatic startup overlay, first establish a working UI render callback for 26.50, then display a timed noninteractive splash on the first valid UI frame. Do not initialize graphics from DllMain.

Original repository licenses and third-party terms still apply.
