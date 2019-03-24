<?php
$fp = fsockopen("127.0.0.1", 2048, $errno, $err_str, 30);
if (!$fp) {
    echo "$err_str ($errno)<br />\n";
} else {
    $out = "GET / HTTP/1.1\r\n";
    $out .= "Host: www.example.com\r\n";
//    $out .= "Connection: Close\r\n\r\n";
    fwrite($fp, $out);
    while (!feof($fp)) {
        echo fgets($fp, 128);
    }
    fclose($fp);
}