
DocumentRoot /mnt/mrms2
RewriteEngine On

Redirect /data/ https://mrms.ncep.noaa.gov/data/

<Directory "/mnt/mrms2">
    # Need FollowSymLinks for mod_rewrite to work!
    Options Indexes FollowSymLinks
    Require all granted
</Directory>
