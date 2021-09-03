public static ImageIcon getImageIcon(String path) {
  if (path == null) 
  {
    log.error("Icon path is null");
    return null;
  }

  java.net.URL imgUrl = GuilImporter.class.getResource(path);

  if (imgUrl == null) 
  {
    log.error("Couldn't find icon: " + imgUrl);
    return null;
  }
  else 
    return new ImageIcon(imgUrl);
}