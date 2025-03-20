#include "cimgui.h"
#include "imgui_markdown/imgui_markdown.h"

CIMGUI_API void igMarkdown(const char* markdown_, size_t markdownLength_, const MarkdownConfig& mdConfig_ )
{
    return ImGui::Markdown(markdown_, markdownLength_, mdConfig_);
}
