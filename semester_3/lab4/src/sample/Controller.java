package sample;

import javafx.event.EventHandler;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.AnchorPane;
import sample.Book;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.input.MouseEvent;
import javafx.scene.control.cell.PropertyValueFactory;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Objects;
import java.util.Scanner;

public class Controller {
    private ObservableList<Book> Data = FXCollections.observableArrayList();

    @FXML
    private TableView<Book> tableBook = new TableView<>();

    @FXML
    private TableColumn<Book, Integer> idColumn;

    @FXML
    private TableColumn<Book, String> fromColumn;

    @FXML
    private TableColumn<Book, String> toColumn;

    @FXML
    private TableColumn<Book, String> dateColumn;

    @FXML
    private TableColumn<Book, String> timeColumn;

    @FXML
    private TableColumn<Book, Double> durationColumn;

    @FXML
    private Button deleteBtn;

    @FXML
    private void initialize() throws FileNotFoundException {
        initData();
        idColumn.setCellValueFactory(new PropertyValueFactory<>("id"));
        fromColumn.setCellValueFactory(new PropertyValueFactory<>("from"));
        toColumn.setCellValueFactory(new PropertyValueFactory<>("to"));
        dateColumn.setCellValueFactory(new PropertyValueFactory<>("date"));
        timeColumn.setCellValueFactory(new PropertyValueFactory<>("time"));
        durationColumn.setCellValueFactory(new PropertyValueFactory<>("duration"));

        tableBook.getSelectionModel().setSelectionMode(SelectionMode.MULTIPLE);
        tableBook.setItems(Data);

        deleteBtn.setOnAction(e->{
            int ix = tableBook.getSelectionModel().getSelectedIndex();
            Data.remove(ix);
        });
    }

    @FXML
    public void Search(ActionEvent event) {
        TextField source = (TextField) event.getSource();

        for (int i = 0; i < tableBook.getItems().size(); i++) {
            for (int j = 0; j < 5; j++) {
                if (Objects.equals(tableBook.getItems().get(i).getAll()[j].toString().toLowerCase(), source.getText().toLowerCase())) {
                    tableBook.requestFocus();
                    tableBook.getSelectionModel().select(i);
                }
            }
        }
    }

    @FXML
    public void Input() {
        tableBook.getSelectionModel().clearSelection();
    }

    private void initData() throws FileNotFoundException {
        Scanner init = new Scanner(new File("data.txt"));
        String s;
        int k = 0;
        while (init.hasNextLine()) {
            k++;
            s = init.nextLine();
            String w[] = s.split(" ");
            for (int i = 0; i < w.length - 4; i++)
                Data.add(new Book(k, w[i], w[i + 1], w[i + 2], w[i + 3], Integer.parseInt(w[i + 4])));
        }
        init.close();
    }

    //private void remove
}