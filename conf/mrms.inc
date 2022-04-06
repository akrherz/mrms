
DocumentRoot /mnt/mrms
RewriteEngine On
    
<Directory "/mnt/mrms">
    # Need FollowSymLinks for mod_rewrite to work!
    Options Indexes FollowSymLinks
    Order allow,deny
    Allow from all

    RewriteRule ^(.*).zip$ /cgi-bin/cybox.py?fn=$1 [L]

</Directory>

Alias /cgi-bin/ "/opt/mrms/cgi-bin/"
<Directory "/opt/mrms/cgi-bin">
    AllowOverride All
    Options FollowSymLinks
    Require all granted
    AddHandler cgi-script .py
    Options +ExecCGI
</Directory>
