public static ImageIcon getImageIcon(String path) {
  java.net.URL imgUrl = GuilImporter.class.getResource(path);

  if (imgUrl != null) 
  {
    return new ImageIcon(imgUrl);
  }
  else {
    log.error("Couldn't find icon: " + imgUrl);
  }
    return null;
}