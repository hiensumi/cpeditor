//
// Created by hiensumi on 07/01/2024.
//

#ifndef CPEDITOR_CODEEDITOR_H
#define CPEDITOR_CODEEDITOR_H
#include <KSyntaxHighlighting/Definition>
#include <KSyntaxHighlighting/Format>
#include <KSyntaxHighlighting/Theme>
#include <QString>
class CodeEditor {
  public:
    CodeEditor();

    // Other member functions...

    KSyntaxHighlighting::Theme getTheme() const;

  private:
    KSyntaxHighlighting::Theme theme;
};

#endif // CPEDITOR_CODEEDITOR_H
