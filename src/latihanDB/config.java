/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package latihanDB;

import java.sql.*;

/**
 *
 * @author Acer
 */
public class config {
    
    private static Connection mysqlconfig;
    public static Connection configDB() throws SQLException{
        try {
            String url = "jdbc:mysql://localhost:3306/db_siswa"; //url database
            String user = "root";   //user
            String pass = "";       //pass
            DriverManager.registerDriver(new com.mysql.jdbc.Driver());  //memanggil jdbc driver di library file 
            mysqlconfig = DriverManager.getConnection(url, user, pass);
        }catch(SQLException e) {
            System.err.print("koneksi gagal" +e.getMessage()); //error message
        }
        return mysqlconfig;
//        TESTING KEDUA
    }
    
}
    


