#include "Widgets.h"


void Widgets::Modal(){
    // Model Functonality
    bool open = true;
    if (ImGui::BeginPopupModal("Modal Demo", &open))
    {
        ImGui::Text("Hello dsjfhds fhjs hfj dshfj hds");
        if (ImGui::Button("Close"))
            ImGui::CloseCurrentPopup();
        ImGui::EndPopup();
    }
}