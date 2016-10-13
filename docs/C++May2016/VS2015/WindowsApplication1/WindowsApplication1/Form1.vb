Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Label1.Text = "+"
        Label2.Text = "="
        Label3.Text = Int(TextBox1.Text) + Int(TextBox2.Text)
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Label1.Text = "-"
        Label2.Text = "="
        Label3.Text = Int(TextBox1.Text) - Int(TextBox2.Text)
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Label1.Text = "*"
        Label2.Text = "="
        Label3.Text = Int(TextBox1.Text) * Int(TextBox2.Text)
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Label1.Text = "/"
        Label2.Text = "="
        Label3.Text = Int(TextBox1.Text) / Int(TextBox2.Text)
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        Label1.Text = "%"
        Label2.Text = "="
        Label3.Text = Int(TextBox1.Text) Mod Int(TextBox2.Text)
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        End
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        TextBox1.Text = ""
        TextBox2.Text = ""
    End Sub
End Class
