
DocumentRoot /mnt/mrms
RewriteEngine On

Redirect /data/ https://mrms.ncep.noaa.gov/

<Directory "/mnt/mrms">
    # Need FollowSymLinks for mod_rewrite to work!
    Options Indexes FollowSymLinks
    Require all granted

    RewriteRule ^(.*).zip$ /cgi-bin/cybox.py?fn=$1 [L]

</Directory>

<Directory "/mnt/mrms12">
    # Need FollowSymLinks for mod_rewrite to work!
    Options Indexes FollowSymLinks
    Require all granted
</Directory>


Alias /cgi-bin/ "/opt/mrms/cgi-bin/"
<Directory "/opt/mrms/cgi-bin">
    AllowOverride All
    Options FollowSymLinks
    Require all granted
    AddHandler cgi-script .py
    Options +ExecCGI
</Directory>
