<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.NumBox = New System.Windows.Forms.TextBox()
        Me.ReplyButon = New System.Windows.Forms.Button()
        Me.ProgressBar1 = New System.Windows.Forms.ProgressBar()
        Me.SuspendLayout()
        '
        'NumBox
        '
        Me.NumBox.Location = New System.Drawing.Point(22, 13)
        Me.NumBox.Name = "NumBox"
        Me.NumBox.Size = New System.Drawing.Size(167, 20)
        Me.NumBox.TabIndex = 0
        '
        'ReplyButon
        '
        Me.ReplyButon.Font = New System.Drawing.Font("Microsoft Sans Serif", 18.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.ReplyButon.Location = New System.Drawing.Point(22, 39)
        Me.ReplyButon.Name = "ReplyButon"
        Me.ReplyButon.Size = New System.Drawing.Size(167, 44)
        Me.ReplyButon.TabIndex = 1
        Me.ReplyButon.Text = "Отговорих"
        Me.ReplyButon.UseVisualStyleBackColor = True
        '
        'ProgressBar1
        '
        Me.ProgressBar1.Location = New System.Drawing.Point(195, 13)
        Me.ProgressBar1.Name = "ProgressBar1"
        Me.ProgressBar1.Size = New System.Drawing.Size(450, 70)
        Me.ProgressBar1.TabIndex = 2
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(665, 98)
        Me.Controls.Add(Me.ProgressBar1)
        Me.Controls.Add(Me.ReplyButon)
        Me.Controls.Add(Me.NumBox)
        Me.Name = "Form1"
        Me.Text = "Познай ЧИСЛО"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents NumBox As TextBox
    Friend WithEvents ReplyButon As Button
    Friend WithEvents ProgressBar1 As ProgressBar
End Class
