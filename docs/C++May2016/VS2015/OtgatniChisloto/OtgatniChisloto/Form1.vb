Public Class Form1
    Dim chislo As Single
    Dim opiti As Integer = 0
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Randomize()
        chislo = Int(Rnd(10) * 10)
        MsgBox("Намислил съм си число от 0 до 9.")
        ProgressBar1.Value = 100
    End Sub

    Private Sub ReplyButon_Click(sender As Object, e As EventArgs) Handles ReplyButon.Click
        On Error Resume Next
        opiti = opiti + 1
        If chislo > NumBox.Text Then MsgBox("Числото ми е по-голямо :)")
        If chislo < NumBox.Text Then MsgBox("Числото ми е по-малко :)")
        If chislo = NumBox.Text Then MsgBox("Ура! Познахте от " + Str(opiti) + " опит")
        If ProgressBar1.Value < 70 Then MsgBox("Опитите Ви вече свършиха. Направили сте" + Str(opiti) + " опита.") : End
        ProgressBar1.Value = ProgressBar1.Value - opiti * 5
    End Sub
        End Class
