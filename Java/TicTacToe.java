import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class TicTacToe {
    public static void main(String[] args) {
        JFrame f = new JFrame();
        Btn buttons[] = new Btn[9];
        for(int i=0;i<9;i++) buttons[i] = new Btn();
        JLabel text = new JLabel();
        JButton reset = new JButton();
        reset.setBounds(800, 800, 200, 150);
        text.setBounds(750,200,500,80);
        text.setFont(new Font("Arial",Font.PLAIN,80));
        text.setText("TicTacToe");
        reset.setFont(new Font("Arial",Font.PLAIN,45));
        reset.setText("Reset");
        buttons[0].btn.setBounds(725, 305, 150, 150);
        buttons[0].x = 0;
        buttons[0].y = 0;
        buttons[1].btn.setBounds(885, 305, 150, 150);
        buttons[1].x = 0;
        buttons[1].y = 1;
        buttons[2].btn.setBounds(1045, 305, 150, 150);
        buttons[2].x = 0;
        buttons[2].y = 2;
        buttons[3].btn.setBounds(725, 465, 150, 150);
        buttons[3].x = 1;
        buttons[3].y = 0;
        buttons[4].btn.setBounds(885, 465, 150, 150);
        buttons[4].x = 1;
        buttons[4].y = 1;
        buttons[5].btn.setBounds(1045, 465, 150, 150);
        buttons[5].x = 1;
        buttons[5].y = 2;
        buttons[6].btn.setBounds(725, 625, 150, 150);
        buttons[6].x = 2;
        buttons[6].y = 0;
        buttons[7].btn.setBounds(885, 625, 150, 150);
        buttons[7].x = 2;
        buttons[7].y = 1;
        buttons[8].btn.setBounds(1045, 625, 150, 150);
        buttons[8].x = 2;
        buttons[8].y = 2;
        flipper flip = new flipper();
        String character[] = {"X", "O"};
        Board b = new Board();
        for(Btn butn:buttons){
            butn.btn.addActionListener(new ActionListener() {
                public void actionPerformed(ActionEvent ae) {
                    if(butn.btn.getText().equals("")){
                        butn.btn.setText(character[flip.b]);
                        butn.btn.setFont(new Font("Arial", Font.PLAIN, 100));
                        b.set(butn.x,butn.y,flip.b);
                         System.out.println(b.board[0][0] + " " + b.board[0][1] + " " + b.board[0][2]);
                         System.out.println(b.board[1][0] + " " + b.board[1][1] + " " + b.board[1][2]);
                         System.out.println(b.board[2][0] + " " + b.board[2][1] + " " + b.board[2][2]);
                        if(b.getwinner() != 2){
                            text.setText("Player " + (b.getwinner()+1) + " wins!");
                        }
                        flip.change();
                    }
                }
            });
        }
        reset.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent ae){
                reset(text,buttons,b,flip);
            }
        });
        f.add(buttons[0].btn);
        f.add(buttons[1].btn);
        f.add(buttons[2].btn);
        f.add(buttons[3].btn);
        f.add(buttons[4].btn);
        f.add(buttons[5].btn);
        f.add(buttons[6].btn);
        f.add(buttons[7].btn);
        f.add(buttons[8].btn);
        f.add(text);
        f.add(reset);
        f.setSize(1920, 1080);
        f.setLayout(null);
        f.setVisible(true);
    }
    private static void reset(JLabel text, Btn buttons[], Board b, flipper flip){
        b.reset();
        text.setFont(new Font("Arial",Font.PLAIN,80));
        text.setText("TicTacToe");
        for(var butn:buttons){
            butn.btn.setText("");
        }
        flip.b = 0;
    }
}

class flipper{
    public int b;
    flipper(){b = 0;}
    public void change(){b = 1-b;}
}

class Board{
    int board[][] = new int[3][3];
    public Board(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                board[i][j] = 2;
            }
        }
    }
    public void set(int x, int y, int player){
        board[x][y] = player;
    }
    public int getwinner(){
        for(int i=0;i<3;i++){
            if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
            if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
        }
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[1][1];
        if(board[2][0] == board[1][1] && board[1][1] == board[0][2]) return board[1][1];
        return 2;
    }
    public void reset(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                board[i][j] = 2;
            }
        }
    }
}

class Btn{
    public int x,y;
    public JButton btn;
    Btn(){
        x=0;y=0;btn = new JButton();
    }
}