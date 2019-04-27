<?php
/**
 * Created by PhpStorm.
 * User: hiram
 * Date: 2019-03-24
 * Time: 21:44
 */
$sock = socket_create(AF_INET, SOCK_STREAM, SOL_TCP);
//连接服务器socket，指定socket监听的端口
$connection = socket_connect($sock, 'localhost', 2048);
//发送数据,通常是post请求体中的数据
socket_write($sock, '你希望发送的数据');
//获取响应结果
$result = socket_read($sock, 1024, PHP_NORMAL_READ);
if ($result) {
    echo '响应结果是'.$result;
} else {
    echo '发送请求失败';
}
